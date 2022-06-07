#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::OpenReadCompletedEventArgs {
    IL2CPP_REGISTER_METHOD(0x01BCB240, void, ctor_1, (app::OpenReadCompletedEventArgs * this_ptr, app::Stream * result, app::Exception * exception, bool cancelled, app::Object * user_token))
    IL2CPP_REGISTER_METHOD(0x01BCB280, app::Stream *, get_Result, (app::OpenReadCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCB2A0, void, ctor_2, (app::OpenReadCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04779D98, OpenReadCompletedEventArgs__ctor_1__MethodInfo)
}
