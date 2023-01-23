#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XsdCachingReader__Class.h>
#include <Modloader/app/structs/XsdCachingReader.h>

namespace app::classes::types {
    namespace XsdCachingReader {
        inline app::XsdCachingReader__Class** type_info = (app::XsdCachingReader__Class**)(modloader::win::memory::resolve_rva(0x047711B8));
        inline app::XsdCachingReader__Class* get_class() {
            return il2cpp::get_class<app::XsdCachingReader__Class>(type_info, "System.Xml", "XsdCachingReader");
        }
        inline app::XsdCachingReader* create() {
            return il2cpp::create_object<app::XsdCachingReader>(get_class());
        }
    } // namespace XsdCachingReader
} // namespace app::classes::types
