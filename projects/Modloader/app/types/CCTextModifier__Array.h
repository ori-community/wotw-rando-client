#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CCTextModifier__Array__Class.h>
#include <Modloader/app/structs/CCTextModifier__Array.h>

namespace app::classes::types {
    namespace CCTextModifier__Array {
        namespace {
            inline app::CCTextModifier__Array__Class* type_info_ref = nullptr;
        }
        inline app::CCTextModifier__Array__Class** type_info = &type_info_ref;
        inline app::CCTextModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::CCTextModifier__Array__Class>(type_info, "", "CCTextModifier[]");
        }
        inline app::CCTextModifier__Array* create() {
            return il2cpp::create_object<app::CCTextModifier__Array>(get_class());
        }
    } // namespace CCTextModifier__Array
} // namespace app::classes::types
