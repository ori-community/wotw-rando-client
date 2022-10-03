#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeContainerNeedsThreadIndexAttribute {
        namespace {
            app::NativeContainerNeedsThreadIndexAttribute__Class* type_info_ref = nullptr;
        }
        app::NativeContainerNeedsThreadIndexAttribute__Class** type_info = &type_info_ref;
        inline app::NativeContainerNeedsThreadIndexAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeContainerNeedsThreadIndexAttribute__Class>(type_info, "Unity.Collections.LowLevel.Unsafe", "NativeContainerNeedsThreadIndexAttribute");
        }
        inline app::NativeContainerNeedsThreadIndexAttribute* create() {
            return il2cpp::create_object<app::NativeContainerNeedsThreadIndexAttribute>(get_class());
        }
    } // namespace NativeContainerNeedsThreadIndexAttribute
} // namespace app::classes::types
