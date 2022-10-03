#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScriptPlayableOutput {
        namespace {
            app::ScriptPlayableOutput__Class* type_info_ref = nullptr;
        }
        app::ScriptPlayableOutput__Class** type_info = &type_info_ref;
        inline app::ScriptPlayableOutput__Class* get_class() {
            return il2cpp::get_class<app::ScriptPlayableOutput__Class>(type_info, "UnityEngine.Playables", "ScriptPlayableOutput");
        }
        inline app::ScriptPlayableOutput* create() {
            return il2cpp::create_object<app::ScriptPlayableOutput>(get_class());
        }
        inline app::ScriptPlayableOutput__Boxed* box(app::ScriptPlayableOutput value) {
            return il2cpp::box_value<app::ScriptPlayableOutput__Boxed>(get_class(), value);
        }
    } // namespace ScriptPlayableOutput
} // namespace app::classes::types
