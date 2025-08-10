#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CaseInsensitiveComparer.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::CaseInsensitiveComparer {
    IL2CPP_REGISTER_METHOD(0x0201EB10, void, ctor_1, app::CaseInsensitiveComparer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201EBE0, void, ctor_2, app::CaseInsensitiveComparer* this_ptr, app::CultureInfo* culture)
    IL2CPP_REGISTER_METHOD(0x0201ECB0, app::CaseInsensitiveComparer*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x0201EE40, int32_t, Compare, app::CaseInsensitiveComparer* this_ptr, app::Object* a, app::Object* b)
} // namespace app::classes::System::Collections::CaseInsensitiveComparer
