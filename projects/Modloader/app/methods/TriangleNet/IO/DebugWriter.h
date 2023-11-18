#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DebugWriter.h>
#include <Modloader/app/structs/IPolygon.h>
#include <Modloader/app/structs/Mesh_1.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::TriangleNet::IO::DebugWriter {
    IL2CPP_REGISTER_METHOD(0x0261E810, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DebugWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0261E9B0, app::DebugWriter*, get_Session, ())
    IL2CPP_REGISTER_METHOD(0x0261EA50, void, Start, (app::DebugWriter * this_ptr, app::String* session))
    IL2CPP_REGISTER_METHOD(0x0261EC10, void, Write, (app::DebugWriter * this_ptr, app::Mesh_1* mesh, bool skip))
    IL2CPP_REGISTER_METHOD(0x0261ECE0, void, Finish_1, (app::DebugWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0261ED80, void, Finish_2, (app::DebugWriter * this_ptr, app::String* path))
    IL2CPP_REGISTER_METHOD(0x0261F200, void, WriteGeometry, (app::DebugWriter * this_ptr, app::IPolygon* geometry))
    IL2CPP_REGISTER_METHOD(0x0261F2D0, void, WriteMesh, (app::DebugWriter * this_ptr, app::Mesh_1* mesh, bool skip))
    IL2CPP_REGISTER_METHOD(0x026200E0, bool, VerticesChanged, (app::DebugWriter * this_ptr, app::Mesh_1* mesh))
    IL2CPP_REGISTER_METHOD(0x02620340, void, HashVertices, (app::DebugWriter * this_ptr, app::Mesh_1* mesh))
} // namespace app::classes::TriangleNet::IO::DebugWriter
