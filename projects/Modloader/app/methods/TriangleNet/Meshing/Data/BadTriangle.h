#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BadTriangle.h>

namespace app::classes::TriangleNet::Meshing::Data::BadTriangle {
    IL2CPP_REGISTER_METHOD(0x02B0EFD0, app::String*, ToString, (app::BadTriangle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BadTriangle * this_ptr))
} // namespace app::classes::TriangleNet::Meshing::Data::BadTriangle
