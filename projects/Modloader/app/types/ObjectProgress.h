#pragma once
#include <Modloader/app/structs/ObjectProgress.h>
#include <Modloader/app/structs/ObjectProgress__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectProgress {
        inline app::ObjectProgress__Class** type_info() {
            static app::ObjectProgress__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ObjectProgress__Class**)(modloader::win::memory::resolve_rva(0x04741C20));
            }
            return cache;
        }
        inline app::ObjectProgress__Class* get_class() {
            return il2cpp::get_class<app::ObjectProgress__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "ObjectProgress");
        }
        inline app::ObjectProgress* create() {
            return il2cpp::create_object<app::ObjectProgress>(get_class());
        }
    } // namespace ObjectProgress
} // namespace app::classes::types
