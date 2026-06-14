#pragma once
#include <Modloader/app/structs/MoonTrailUpdateContext.h>
#include <Modloader/app/structs/MoonTrailUpdateContext__Array.h>
#include <Modloader/app/structs/MoonTrailUpdateContext__Boxed.h>
#include <Modloader/app/structs/MoonTrailUpdateContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTrailUpdateContext {
        inline app::MoonTrailUpdateContext__Class** type_info() {
            static app::MoonTrailUpdateContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTrailUpdateContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTrailUpdateContext__Class* get_class() {
            return il2cpp::get_class<app::MoonTrailUpdateContext__Class>(type_info(), "Moon", "MoonTrailUpdateContext");
        }
        inline app::MoonTrailUpdateContext* create() {
            return il2cpp::create_object<app::MoonTrailUpdateContext>(get_class());
        }
        inline app::MoonTrailUpdateContext__Boxed* box(app::MoonTrailUpdateContext value) {
            return il2cpp::box_value<app::MoonTrailUpdateContext__Boxed>(get_class(), value);
        }
        inline app::MoonTrailUpdateContext__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTrailUpdateContext__Array>(get_class(), size);
        }
        inline app::MoonTrailUpdateContext__Array* create_array(const std::vector<app::MoonTrailUpdateContext>& items) {
            return il2cpp::array_new<app::MoonTrailUpdateContext__Array>(get_class(), items);
        }
    } // namespace MoonTrailUpdateContext
} // namespace app::classes::types
