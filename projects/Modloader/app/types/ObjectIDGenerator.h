#pragma once
#include <Modloader/app/structs/ObjectIDGenerator.h>
#include <Modloader/app/structs/ObjectIDGenerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectIDGenerator {
        inline app::ObjectIDGenerator__Class** type_info() {
            static app::ObjectIDGenerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ObjectIDGenerator__Class**)(modloader::win::memory::resolve_rva(0x047497A8));
            }
            return cache;
        }
        inline app::ObjectIDGenerator__Class* get_class() {
            return il2cpp::get_class<app::ObjectIDGenerator__Class>(type_info(), "System.Runtime.Serialization", "ObjectIDGenerator");
        }
        inline app::ObjectIDGenerator* create() {
            return il2cpp::create_object<app::ObjectIDGenerator>(get_class());
        }
    } // namespace ObjectIDGenerator
} // namespace app::classes::types
