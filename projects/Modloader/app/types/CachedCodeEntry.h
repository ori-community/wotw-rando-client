#pragma once
#include <Modloader/app/structs/CachedCodeEntry.h>
#include <Modloader/app/structs/CachedCodeEntry__Array.h>
#include <Modloader/app/structs/CachedCodeEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CachedCodeEntry {
        inline app::CachedCodeEntry__Class** type_info() {
            static app::CachedCodeEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CachedCodeEntry__Class**)(modloader::win::memory::resolve_rva(0x04757918));
            }
            return cache;
        }
        inline app::CachedCodeEntry__Class* get_class() {
            return il2cpp::get_class<app::CachedCodeEntry__Class>(type_info(), "System.Text.RegularExpressions", "CachedCodeEntry");
        }
        inline app::CachedCodeEntry* create() {
            return il2cpp::create_object<app::CachedCodeEntry>(get_class());
        }
        inline app::CachedCodeEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::CachedCodeEntry__Array>(get_class(), size);
        }
        inline app::CachedCodeEntry__Array* create_array(const std::vector<app::CachedCodeEntry*>& items) {
            return il2cpp::array_new<app::CachedCodeEntry__Array>(get_class(), items);
        }
    } // namespace CachedCodeEntry
} // namespace app::classes::types
