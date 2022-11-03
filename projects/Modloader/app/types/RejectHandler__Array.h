#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RejectHandler__Array {
        namespace {
            inline app::RejectHandler__Array__Class* type_info_ref = nullptr;
        }
        inline app::RejectHandler__Array__Class** type_info = &type_info_ref;
        inline app::RejectHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::RejectHandler__Array__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "RejectHandler[]");
        }
        inline app::RejectHandler__Array* create() {
            return il2cpp::create_object<app::RejectHandler__Array>(get_class());
        }
    } // namespace RejectHandler__Array
} // namespace app::classes::types
