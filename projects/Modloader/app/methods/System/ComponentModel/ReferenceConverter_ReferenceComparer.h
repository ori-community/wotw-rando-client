#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReferenceConverter_ReferenceComparer.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReferenceConverter.h>

namespace app::classes::System::ComponentModel::ReferenceConverter_ReferenceComparer {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::ReferenceConverter_ReferenceComparer * this_ptr, app::ReferenceConverter* converter))
    IL2CPP_REGISTER_METHOD(0x0299A000, int32_t, Compare, (app::ReferenceConverter_ReferenceComparer * this_ptr, app::Object* item1, app::Object* item2))
} // namespace app::classes::System::ComponentModel::ReferenceConverter_ReferenceComparer
