#pragma once
#include <Modloader/app/structs/SpellIconsCollection_Icons.h>
#include <Modloader/app/structs/SpellIconsCollection_Icons__Array.h>
#include <Modloader/app/structs/SpellIconsCollection_Icons__Boxed.h>
#include <Modloader/app/structs/SpellIconsCollection_Icons__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellIconsCollection_Icons {
        inline app::SpellIconsCollection_Icons__Class** type_info() {
            static app::SpellIconsCollection_Icons__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpellIconsCollection_Icons__Class**)(modloader::win::memory::resolve_rva(0x04731378));
            }
            return cache;
        }
        inline app::SpellIconsCollection_Icons__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellIconsCollection_Icons__Class>(type_info(), "", "SpellIconsCollection", "Icons");
        }
        inline app::SpellIconsCollection_Icons* create() {
            return il2cpp::create_object<app::SpellIconsCollection_Icons>(get_class());
        }
        inline app::SpellIconsCollection_Icons__Boxed* box(app::SpellIconsCollection_Icons value) {
            return il2cpp::box_value<app::SpellIconsCollection_Icons__Boxed>(get_class(), value);
        }
        inline app::SpellIconsCollection_Icons__Array* create_array(int size) {
            return il2cpp::array_new<app::SpellIconsCollection_Icons__Array>(get_class(), size);
        }
        inline app::SpellIconsCollection_Icons__Array* create_array(const std::vector<app::SpellIconsCollection_Icons>& items) {
            return il2cpp::array_new<app::SpellIconsCollection_Icons__Array>(get_class(), items);
        }
    } // namespace SpellIconsCollection_Icons
} // namespace app::classes::types
