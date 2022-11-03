#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundHost__Array {
        namespace {
            inline app::SoundHost__Array__Class* type_info_ref = nullptr;
        }
        inline app::SoundHost__Array__Class** type_info = &type_info_ref;
        inline app::SoundHost__Array__Class* get_class() {
            return il2cpp::get_class<app::SoundHost__Array__Class>(type_info, "Moon.Wwise", "SoundHost[]");
        }
        inline app::SoundHost__Array* create() {
            return il2cpp::create_object<app::SoundHost__Array>(get_class());
        }
    } // namespace SoundHost__Array
} // namespace app::classes::types
