#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransparentProxy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransparentProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparentProxy__Fields_DEFINED)
#include <Modloader/app/structs/RuntimeRemoteClassHandle.h>
#if defined(IL2CPP_STRUCT_RuntimeRemoteClassHandle_DEFINED)
#define IL2CPP_STRUCT_TransparentProxy__Fields_DEFINED
struct RealProxy;
struct __declspec(align(8)) TransparentProxy__Fields {
    struct RealProxy* _rp;
    struct RuntimeRemoteClassHandle _class;
    bool _custom_type_info;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransparentProxy__Fields_FWDDECL)
#define IL2CPP_STRUCT_TransparentProxy__Fields_FWDDECL
#include <Modloader/app/structs/RealProxy.h>
#endif
#undef IL2CPP_STRUCT_TransparentProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparentProxy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TransparentProxy__Fields_FWDDECL)
#include <Modloader/app/structs/TransparentProxy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransparentProxy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
