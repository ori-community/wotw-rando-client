#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/XalService_c.h>

namespace app::classes::Microsoft::Xbox::Services::Xal::XalService___c {
    IL2CPP_REGISTER_METHOD(0x0143BC30, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::XalService_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0143BD70, void, _OnPlatformStorageWrite_b__22_1, app::XalService_c* this_ptr, app::Task* t)
    IL2CPP_REGISTER_METHOD(0x0143BE80, void, _OnPlatformStorageRead_b__23_1, app::XalService_c* this_ptr, app::Task* t)
    IL2CPP_REGISTER_METHOD(0x0143BF90, void, _OnPlatformStorageClear_b__24_1, app::XalService_c* this_ptr, app::Task* t)
} // namespace app::classes::Microsoft::Xbox::Services::Xal::XalService___c
