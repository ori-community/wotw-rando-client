#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartDashValueProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartDashValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartDashValueProvider_DEFINED)
#include <Modloader/app/structs/CartDashValueProvider__Fields.h>
#if defined(IL2CPP_STRUCT_CartDashValueProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_CartDashValueProvider_DEFINED
struct CartDashValueProvider__Class;
struct CartDashValueProvider {
    struct CartDashValueProvider__Class* klass;
    MonitorData* monitor;
    struct CartDashValueProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartDashValueProvider_FWDDECL)
#define IL2CPP_STRUCT_CartDashValueProvider_FWDDECL
#include <Modloader/app/structs/CartDashValueProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_CartDashValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartDashValueProvider_DEFINED) && !defined(IL2CPP_STRUCT_CartDashValueProvider_FWDDECL)
#include <Modloader/app/structs/CartDashValueProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartDashValueProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
