#pragma once
#include <Modloader/app/structs/NativeContainerNeedsThreadIndexAttribute.h>
#include <Modloader/app/structs/NativeContainerNeedsThreadIndexAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeContainerNeedsThreadIndexAttribute {
        inline app::NativeContainerNeedsThreadIndexAttribute__Class** type_info() {
            static app::NativeContainerNeedsThreadIndexAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeContainerNeedsThreadIndexAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeContainerNeedsThreadIndexAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeContainerNeedsThreadIndexAttribute__Class>(type_info(), "Unity.Collections.LowLevel.Unsafe", "NativeContainerNeedsThreadIndexAttribute");
        }
        inline app::NativeContainerNeedsThreadIndexAttribute* create() {
            return il2cpp::create_object<app::NativeContainerNeedsThreadIndexAttribute>(get_class());
        }
    } // namespace NativeContainerNeedsThreadIndexAttribute
} // namespace app::classes::types
