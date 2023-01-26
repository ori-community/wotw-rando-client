#pragma once
#include <Modloader/app/structs/GenericMappingEntry.h>
#include <Modloader/app/structs/GenericMappingEntry__Array.h>
#include <Modloader/app/structs/GenericMappingEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericMappingEntry {
        inline app::GenericMappingEntry__Class** type_info() {
            static app::GenericMappingEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GenericMappingEntry__Class**)(modloader::win::memory::resolve_rva(0x04768190));
            }
            return cache;
        }
        inline app::GenericMappingEntry__Class* get_class() {
            return il2cpp::get_class<app::GenericMappingEntry__Class>(type_info(), "", "GenericMappingEntry");
        }
        inline app::GenericMappingEntry* create() {
            return il2cpp::create_object<app::GenericMappingEntry>(get_class());
        }
        inline app::GenericMappingEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::GenericMappingEntry__Array>(get_class(), size);
        }
        inline app::GenericMappingEntry__Array* create_array(const std::vector<app::GenericMappingEntry*>& items) {
            return il2cpp::array_new<app::GenericMappingEntry__Array>(get_class(), items);
        }
    } // namespace GenericMappingEntry
} // namespace app::classes::types
