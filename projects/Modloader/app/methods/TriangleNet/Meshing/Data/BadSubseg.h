#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BadSubseg.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::TriangleNet::Meshing::Data::BadSubseg {
    IL2CPP_REGISTER_METHOD(0x020D03A0, int32_t, GetHashCode, (app::BadSubseg * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B0E7B0, app::String*, ToString, (app::BadSubseg * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BadSubseg * this_ptr))
} // namespace app::classes::TriangleNet::Meshing::Data::BadSubseg
