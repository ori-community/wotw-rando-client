#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Rect_DirectConverter {
        namespace {
            inline app::Rect_DirectConverter__Class* type_info_ref = nullptr;
        }
        inline app::Rect_DirectConverter__Class** type_info = &type_info_ref;
        inline app::Rect_DirectConverter__Class* get_class() {
            return il2cpp::get_class<app::Rect_DirectConverter__Class>(type_info, "FullSerializer.Internal.DirectConverters", "Rect_DirectConverter");
        }
        inline app::Rect_DirectConverter* create() {
            return il2cpp::create_object<app::Rect_DirectConverter>(get_class());
        }
    } // namespace Rect_DirectConverter
} // namespace app::classes::types
