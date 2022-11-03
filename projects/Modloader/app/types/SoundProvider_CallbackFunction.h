#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundProvider_CallbackFunction {
        inline app::SoundProvider_CallbackFunction__Class** type_info = (app::SoundProvider_CallbackFunction__Class**)(modloader::win::memory::resolve_rva(0x0470E280));
        inline app::SoundProvider_CallbackFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundProvider_CallbackFunction__Class>(type_info, "", "SoundProvider", "CallbackFunction");
        }
        inline app::SoundProvider_CallbackFunction* create() {
            return il2cpp::create_object<app::SoundProvider_CallbackFunction>(get_class());
        }
    } // namespace SoundProvider_CallbackFunction
} // namespace app::classes::types
