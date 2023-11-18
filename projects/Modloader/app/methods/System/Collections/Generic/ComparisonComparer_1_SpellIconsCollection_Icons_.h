#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_SpellIconsCollection_Icons_.h>
#include <Modloader/app/structs/Comparison_1_SpellIconsCollection_Icons_.h>
#include <Modloader/app/structs/SpellIconsCollection_Icons.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_SpellIconsCollection_Icons_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_SpellIconsCollection_Icons_ * this_ptr, app::Comparison_1_SpellIconsCollection_Icons_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A0E0, int32_t, Compare, (app::ComparisonComparer_1_SpellIconsCollection_Icons_ * this_ptr, app::SpellIconsCollection_Icons x, app::SpellIconsCollection_Icons y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_SpellIconsCollection_Icons_
