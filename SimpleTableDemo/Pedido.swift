//
//  Pedido.swift
//  SimpleTableDemo
//
//  Created by Luis Rollon Gordo on 14/10/16.
//  Copyright © 2016 EfectoApple. All rights reserved.
//

import Foundation

class Pedido: NSObject {
    var idPedido = ""
    var fechaPedido: Date!
    var importePedido = ""
    var productos = [String]()
}
