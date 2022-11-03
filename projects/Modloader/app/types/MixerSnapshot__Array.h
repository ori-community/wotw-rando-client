#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MixerSnapshot__Array {
        namespace {
            inline app::MixerSnapshot__Array__Class* type_info_ref = nullptr;
        }
        inline app::MixerSnapshot__Array__Class** type_info = &type_info_ref;
        inline app::MixerSnapshot__Array__Class* get_class() {
            return il2cpp::get_class<app::MixerSnapshot__Array__Class>(type_info, "", "MixerSnapshot[]");
        }
        inline app::MixerSnapshot__Array* create() {
            return il2cpp::create_object<app::MixerSnapshot__Array>(get_class());
        }
    } // namespace MixerSnapshot__Array
} // namespace app::classes::types
