#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BinHexDecoder__Class.h>
#include <Modloader/app/structs/BinHexDecoder.h>

namespace app::classes::types {
    namespace BinHexDecoder {
        namespace {
            inline app::BinHexDecoder__Class* type_info_ref = nullptr;
        }
        inline app::BinHexDecoder__Class** type_info = &type_info_ref;
        inline app::BinHexDecoder__Class* get_class() {
            return il2cpp::get_class<app::BinHexDecoder__Class>(type_info, "System.Xml", "BinHexDecoder");
        }
        inline app::BinHexDecoder* create() {
            return il2cpp::create_object<app::BinHexDecoder>(get_class());
        }
    } // namespace BinHexDecoder
} // namespace app::classes::types
