#pragma once
#include <Modloader/app/structs/ResourceReader_ResourceEnumerator.h>
#include <Modloader/app/structs/ResourceReader_ResourceEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResourceReader_ResourceEnumerator {
        inline app::ResourceReader_ResourceEnumerator__Class** type_info() {
            static app::ResourceReader_ResourceEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ResourceReader_ResourceEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04799800));
            }
            return cache;
        }
        inline app::ResourceReader_ResourceEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::ResourceReader_ResourceEnumerator__Class>(type_info(), "System.Resources", "ResourceReader", "ResourceEnumerator");
        }
        inline app::ResourceReader_ResourceEnumerator* create() {
            return il2cpp::create_object<app::ResourceReader_ResourceEnumerator>(get_class());
        }
    } // namespace ResourceReader_ResourceEnumerator
} // namespace app::classes::types
