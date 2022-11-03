#include <Modloader/windows_api/memory.h>
#include <Modloader/macros.h>

#define IL2CPP_TYPEDEF(a, n) IL2CPP_MODLOADER_DLLEXPORT app::##n##__Class** app::##n##__TypeInfo = (n##__Class**)(modloader::win::memory::resolve_rva(a));
namespace app {
#include "il2cpp_typeinfo_registration.h"

    namespace {
        app::UberStateGroup__Class* UberStateGroup__TypeInfo_Ref = nullptr;
    }

    IL2CPP_MODLOADER_DLLEXPORT app::UberStateGroup__Class** UberStateGroup__TypeInfo = &UberStateGroup__TypeInfo_Ref;
}
#undef IL2CPP_TYPEDEF


#define IL2CPP_API_BINDING(r, n, p) r (*n) p = (r (*) p)(modloader::win::memory::resolve_rva(n##_ptr))
#include "il2cpp_api_registration.h"
#undef IL2CPP_API_BINDING
