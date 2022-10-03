#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HuffmanTree {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HuffmanTree__Class** type_info;
        inline app::HuffmanTree__Class* get_class() {
            return il2cpp::get_class<app::HuffmanTree__Class>(type_info, "Unity.IO.Compression", "HuffmanTree");
        }
        inline app::HuffmanTree* create() {
            return il2cpp::create_object<app::HuffmanTree>(get_class());
        }
    } // namespace HuffmanTree
} // namespace app::classes::types
