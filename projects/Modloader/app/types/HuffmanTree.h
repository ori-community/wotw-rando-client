#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HuffmanTree {
        inline app::HuffmanTree__Class** type_info = (app::HuffmanTree__Class**)(modloader::win::memory::resolve_rva(0x04722FB0));
        inline app::HuffmanTree__Class* get_class() {
            return il2cpp::get_class<app::HuffmanTree__Class>(type_info, "Unity.IO.Compression", "HuffmanTree");
        }
        inline app::HuffmanTree* create() {
            return il2cpp::create_object<app::HuffmanTree>(get_class());
        }
    } // namespace HuffmanTree
} // namespace app::classes::types
