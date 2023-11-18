#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkTriangle.h>

namespace app::classes::AkTriangle {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkTriangle * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026FEF80, void*, getCPtr, (app::AkTriangle * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkTriangle * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026FF010, void, Finalize, (app::AkTriangle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FF090, void, Dispose, (app::AkTriangle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FF2A0, void, ctor_2, (app::AkTriangle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FF3C0, void, ctor_3, (app::AkTriangle * this_ptr, uint16_t in_pt0, uint16_t in_pt1, uint16_t in_pt2, uint16_t in_surface_info))
    IL2CPP_REGISTER_METHOD(0x026FF520, void, set_point0, (app::AkTriangle * this_ptr, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x026FF650, uint16_t, get_point0, (app::AkTriangle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FF770, void, set_point1, (app::AkTriangle * this_ptr, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x026FF8A0, uint16_t, get_point1, (app::AkTriangle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FF9C0, void, set_point2, (app::AkTriangle * this_ptr, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x026FFAF0, uint16_t, get_point2, (app::AkTriangle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FFC10, void, set_surface, (app::AkTriangle * this_ptr, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x026FFD40, uint16_t, get_surface, (app::AkTriangle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FFE60, void, Clear, (app::AkTriangle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FFF00, int32_t, GetSizeOf, ())
    IL2CPP_REGISTER_METHOD(0x026FFF90, void, Clone, (app::AkTriangle * this_ptr, app::AkTriangle* other))
} // namespace app::classes::AkTriangle
