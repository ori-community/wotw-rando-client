#pragma once
#include <Modloader/app/structs/DefaultReferenceResolver.h>
#include <Modloader/app/structs/DefaultReferenceResolver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultReferenceResolver {
        inline app::DefaultReferenceResolver__Class** type_info() {
            static app::DefaultReferenceResolver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DefaultReferenceResolver__Class**)(modloader::win::memory::resolve_rva(0x047682F0));
            }
            return cache;
        }
        inline app::DefaultReferenceResolver__Class* get_class() {
            return il2cpp::get_class<app::DefaultReferenceResolver__Class>(type_info(), "Newtonsoft.Json.Serialization", "DefaultReferenceResolver");
        }
        inline app::DefaultReferenceResolver* create() {
            return il2cpp::create_object<app::DefaultReferenceResolver>(get_class());
        }
    } // namespace DefaultReferenceResolver
} // namespace app::classes::types
