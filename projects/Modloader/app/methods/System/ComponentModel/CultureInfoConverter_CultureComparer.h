#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CultureInfoConverter_CultureComparer.h>
#include <Modloader/app/structs/CultureInfoConverter.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::CultureInfoConverter_CultureComparer {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::CultureInfoConverter_CultureComparer * this_ptr, app::CultureInfoConverter* culture_converter))
    IL2CPP_REGISTER_METHOD(0x01FDB700, int32_t, Compare, (app::CultureInfoConverter_CultureComparer * this_ptr, app::Object* item1, app::Object* item2))
} // namespace app::classes::System::ComponentModel::CultureInfoConverter_CultureComparer
