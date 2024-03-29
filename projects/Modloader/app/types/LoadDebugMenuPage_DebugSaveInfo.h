#pragma once
#include <Modloader/app/structs/LoadDebugMenuPage_DebugSaveInfo.h>
#include <Modloader/app/structs/LoadDebugMenuPage_DebugSaveInfo__Array.h>
#include <Modloader/app/structs/LoadDebugMenuPage_DebugSaveInfo__Boxed.h>
#include <Modloader/app/structs/LoadDebugMenuPage_DebugSaveInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadDebugMenuPage_DebugSaveInfo {
        inline app::LoadDebugMenuPage_DebugSaveInfo__Class** type_info() {
            static app::LoadDebugMenuPage_DebugSaveInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadDebugMenuPage_DebugSaveInfo__Class**)(modloader::win::memory::resolve_rva(0x0475EF80));
            }
            return cache;
        }
        inline app::LoadDebugMenuPage_DebugSaveInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::LoadDebugMenuPage_DebugSaveInfo__Class>(type_info(), "", "LoadDebugMenuPage", "DebugSaveInfo");
        }
        inline app::LoadDebugMenuPage_DebugSaveInfo* create() {
            return il2cpp::create_object<app::LoadDebugMenuPage_DebugSaveInfo>(get_class());
        }
        inline app::LoadDebugMenuPage_DebugSaveInfo__Boxed* box(app::LoadDebugMenuPage_DebugSaveInfo value) {
            return il2cpp::box_value<app::LoadDebugMenuPage_DebugSaveInfo__Boxed>(get_class(), value);
        }
        inline app::LoadDebugMenuPage_DebugSaveInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::LoadDebugMenuPage_DebugSaveInfo__Array>(get_class(), size);
        }
        inline app::LoadDebugMenuPage_DebugSaveInfo__Array* create_array(const std::vector<app::LoadDebugMenuPage_DebugSaveInfo>& items) {
            return il2cpp::array_new<app::LoadDebugMenuPage_DebugSaveInfo__Array>(get_class(), items);
        }
    } // namespace LoadDebugMenuPage_DebugSaveInfo
} // namespace app::classes::types
