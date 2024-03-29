#pragma once
#include <Modloader/app/structs/ResolutionOptions_ResolutionEntry.h>
#include <Modloader/app/structs/ResolutionOptions_ResolutionEntry__Array.h>
#include <Modloader/app/structs/ResolutionOptions_ResolutionEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResolutionOptions_ResolutionEntry {
        inline app::ResolutionOptions_ResolutionEntry__Class** type_info() {
            static app::ResolutionOptions_ResolutionEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ResolutionOptions_ResolutionEntry__Class**)(modloader::win::memory::resolve_rva(0x047738A8));
            }
            return cache;
        }
        inline app::ResolutionOptions_ResolutionEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::ResolutionOptions_ResolutionEntry__Class>(type_info(), "", "ResolutionOptions", "ResolutionEntry");
        }
        inline app::ResolutionOptions_ResolutionEntry* create() {
            return il2cpp::create_object<app::ResolutionOptions_ResolutionEntry>(get_class());
        }
        inline app::ResolutionOptions_ResolutionEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::ResolutionOptions_ResolutionEntry__Array>(get_class(), size);
        }
        inline app::ResolutionOptions_ResolutionEntry__Array* create_array(const std::vector<app::ResolutionOptions_ResolutionEntry*>& items) {
            return il2cpp::array_new<app::ResolutionOptions_ResolutionEntry__Array>(get_class(), items);
        }
    } // namespace ResolutionOptions_ResolutionEntry
} // namespace app::classes::types
