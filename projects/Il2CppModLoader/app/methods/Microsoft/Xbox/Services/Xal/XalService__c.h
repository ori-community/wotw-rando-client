#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Microsoft::Xbox::Services::Xal::XalService___c {
    IL2CPP_REGISTER_METHOD(0x0143BC30, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XalService_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0143BD70, void, _OnPlatformStorageWrite_b__22_1, (app::XalService_c * this_ptr, app::Task * t))
    IL2CPP_REGISTER_METHODINFO(0x0477C1F8, XalService_c__OnPlatformStorageWrite_b__22_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0143BE80, void, _OnPlatformStorageRead_b__23_1, (app::XalService_c * this_ptr, app::Task * t))
    IL2CPP_REGISTER_METHODINFO(0x04712278, XalService_c__OnPlatformStorageRead_b__23_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0143BF90, void, _OnPlatformStorageClear_b__24_1, (app::XalService_c * this_ptr, app::Task * t))
    IL2CPP_REGISTER_METHODINFO(0x0471FDA8, XalService_c__OnPlatformStorageClear_b__24_1__MethodInfo)
}
