#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Gradient_DirectConverter {
        namespace {
            inline app::Gradient_DirectConverter__Class* type_info_ref = nullptr;
        }
        inline app::Gradient_DirectConverter__Class** type_info = &type_info_ref;
        inline app::Gradient_DirectConverter__Class* get_class() {
            return il2cpp::get_class<app::Gradient_DirectConverter__Class>(type_info, "FullSerializer.Internal.DirectConverters", "Gradient_DirectConverter");
        }
        inline app::Gradient_DirectConverter* create() {
            return il2cpp::create_object<app::Gradient_DirectConverter>(get_class());
        }
    } // namespace Gradient_DirectConverter
} // namespace app::classes::types
