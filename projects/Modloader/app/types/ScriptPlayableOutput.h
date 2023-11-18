#pragma once
#include <Modloader/app/structs/ScriptPlayableOutput.h>
#include <Modloader/app/structs/ScriptPlayableOutput__Boxed.h>
#include <Modloader/app/structs/ScriptPlayableOutput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScriptPlayableOutput {
        inline app::ScriptPlayableOutput__Class** type_info() {
            static app::ScriptPlayableOutput__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScriptPlayableOutput__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScriptPlayableOutput__Class* get_class() {
            return il2cpp::get_class<app::ScriptPlayableOutput__Class>(type_info(), "UnityEngine.Playables", "ScriptPlayableOutput");
        }
        inline app::ScriptPlayableOutput* create() {
            return il2cpp::create_object<app::ScriptPlayableOutput>(get_class());
        }
        inline app::ScriptPlayableOutput__Boxed* box(app::ScriptPlayableOutput value) {
            return il2cpp::box_value<app::ScriptPlayableOutput__Boxed>(get_class(), value);
        }
    } // namespace ScriptPlayableOutput
} // namespace app::classes::types
