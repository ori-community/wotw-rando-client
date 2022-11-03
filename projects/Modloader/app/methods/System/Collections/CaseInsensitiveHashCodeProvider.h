#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::CaseInsensitiveHashCodeProvider {
    IL2CPP_REGISTER_METHOD(0x0201EF80, void, ctor_1, (app::CaseInsensitiveHashCodeProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0201F050, void, ctor_2, (app::CaseInsensitiveHashCodeProvider * this_ptr, app::CultureInfo* culture))
    IL2CPP_REGISTER_METHODINFO(0x04727238, CaseInsensitiveHashCodeProvider__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201F120, app::CaseInsensitiveHashCodeProvider*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x0201F2B0, int32_t, GetHashCode, (app::CaseInsensitiveHashCodeProvider * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHODINFO(0x047911D8, CaseInsensitiveHashCodeProvider_GetHashCode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::System::Collections::CaseInsensitiveHashCodeProvider
