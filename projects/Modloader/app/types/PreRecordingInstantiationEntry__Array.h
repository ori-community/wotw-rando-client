#pragma once
#include <Modloader/app/structs/PreRecordingInstantiationEntry__Array.h>
#include <Modloader/app/structs/PreRecordingInstantiationEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreRecordingInstantiationEntry__Array {
        inline app::PreRecordingInstantiationEntry__Array__Class** type_info() {
            static app::PreRecordingInstantiationEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreRecordingInstantiationEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreRecordingInstantiationEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::PreRecordingInstantiationEntry__Array__Class>(type_info(), "", "PreRecordingInstantiationEntry[]");
        }
        inline app::PreRecordingInstantiationEntry__Array* create() {
            return il2cpp::create_object<app::PreRecordingInstantiationEntry__Array>(get_class());
        }
    } // namespace PreRecordingInstantiationEntry__Array
} // namespace app::classes::types
