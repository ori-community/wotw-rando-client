#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ResourceFallbackManager.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Globalization_CultureInfo_.h>

namespace app::classes::System::Resources::ResourceFallbackManager {
    IL2CPP_REGISTER_METHOD(0x01A841F0, void, ctor, (app::ResourceFallbackManager * this_ptr, app::CultureInfo* starting_culture, app::CultureInfo* neutral_resources_culture, bool use_parents))
    IL2CPP_REGISTER_METHOD(0x01A842E0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::ResourceFallbackManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A842F0, app::IEnumerator_1_System_Globalization_CultureInfo_*, GetEnumerator, (app::ResourceFallbackManager * this_ptr))
} // namespace app::classes::System::Resources::ResourceFallbackManager
