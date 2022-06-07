#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::UploadValuesCompletedEventArgs {
    IL2CPP_REGISTER_METHOD(0x01BCB240, void, ctor_1, (app::UploadValuesCompletedEventArgs * this_ptr, app::Byte__Array * result, app::Exception * exception, bool cancelled, app::Object * user_token))
    IL2CPP_REGISTER_METHOD(0x01BCB280, app::Byte__Array *, get_Result, (app::UploadValuesCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020AD020, void, ctor_2, (app::UploadValuesCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04741A28, UploadValuesCompletedEventArgs__ctor_1__MethodInfo)
}
