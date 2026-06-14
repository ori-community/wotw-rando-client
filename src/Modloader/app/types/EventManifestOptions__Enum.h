#pragma once
#include <Modloader/app/structs/EventManifestOptions__Enum.h>
#include <Modloader/app/structs/EventManifestOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventManifestOptions__Enum {
        inline app::EventManifestOptions__Enum__Class** type_info() {
            static app::EventManifestOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventManifestOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventManifestOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventManifestOptions__Enum__Class>(type_info(), "System.Diagnostics.Tracing", "EventManifestOptions");
        }
        inline app::EventManifestOptions__Enum* create() {
            return il2cpp::create_object<app::EventManifestOptions__Enum>(get_class());
        }
    } // namespace EventManifestOptions__Enum
} // namespace app::classes::types
