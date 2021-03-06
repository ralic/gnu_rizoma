/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*credito.h
*
*    Copyright (C) 2004 Rizoma Tecnologia Limitada <info@rizoma.cl>
*
*    This file is part of rizoma.
*
*    Rizoma is free software; you can redistribute it and/or modify
*    it under the terms of the GNU General Public License as published by
*    the Free Software Foundation; either version 2 of the License, or
*    (at your option) any later version.
*
*    This program is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU General Public License for more details.
*
*    You should have received a copy of the GNU General Public License
*    along with this program; if not, write to the Free Software
*    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef CREDITO_H

#define CREDITO_H

enum tipo_cliente client_type;

void fill_credit_data (const gchar *rut, const gchar *name, const gchar *address, const gchar *phone);

void search_client (GtkWidget *widget, gpointer data);

//void creditos_box (MainBox *module_box);
void clientes_box ();

void AddClient (GtkWidget *widget, gpointer data);

void CloseClientWindow (GtkWindow *window, gpointer user_data);

GtkWidget * caja_entrada (gchar *text, gint largo_maximo, gint ancho, GtkWidget *entry);

void AgregarClienteABD (GtkWidget *widget, gpointer data);

gboolean VerificarRut (gchar *rut, gchar *ver);

gint FillClientStore (GtkListStore *store);

void DatosDeudor(GtkTreeSelection *treeselection, gpointer user_data);

void datos_deuda_factura_guia (GtkTreeSelection *treeselection, gpointer user_data);

void datos_cheques_restaurant (GtkTreeSelection *treeselection, gpointer user_data);

void FillVentasDeudas (gint rut);

void fill_deudas_facturas_guias (gint rut, gint tipo_documento_n);

void ChangeDetalle (GtkTreeSelection *treeselection, gpointer user_data);

void change_detalle_guia_factura (GtkTreeSelection *treeselection, gpointer user_data);

gint AbonarWindow (void);

void Abonar (void);

void ModificarCliente (void);

void ClientStatus (void);

gboolean VentaPosible (gint rut, gint total_venta);

gint ToggleClientCredit (GtkCellRendererToggle *toggle, char *path_str, gpointer data);

void EliminarCliente (void);

void ModificarClienteDB (void);

gint LimiteCredito (const gchar *rut);

void setup_print_menu();

void search_emisor (void);

void emisores_box ();

void abonos_box ();

void guias_facturas_box ();

#endif
