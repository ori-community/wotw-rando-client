#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_ChannelSwapper {
        inline app::ShaderID_ChannelSwapper__Class** type_info = (app::ShaderID_ChannelSwapper__Class**)(modloader::win::memory::resolve_rva(0x0475F1B0));
        inline app::ShaderID_ChannelSwapper__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ChannelSwapper__Class>(type_info, "Colorful", "ShaderID_ChannelSwapper");
        }
        inline app::ShaderID_ChannelSwapper* create() {
            return il2cpp::create_object<app::ShaderID_ChannelSwapper>(get_class());
        }
    } // namespace ShaderID_ChannelSwapper
} // namespace app::classes::types
