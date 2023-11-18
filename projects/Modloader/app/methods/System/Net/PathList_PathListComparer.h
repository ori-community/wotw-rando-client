#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PathList_PathListComparer.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::PathList_PathListComparer {
    IL2CPP_REGISTER_METHOD(0x01BCB9C0, int32_t, IComparer_Compare, (app::PathList_PathListComparer * this_ptr, app::Object* ol, app::Object* or_1))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PathList_PathListComparer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCBB70, void, cctor, ())
} // namespace app::classes::System::Net::PathList_PathListComparer
