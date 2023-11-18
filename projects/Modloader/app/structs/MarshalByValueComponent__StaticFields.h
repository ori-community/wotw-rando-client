#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MarshalByValueComponent__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MarshalByValueComponent__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarshalByValueComponent__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MarshalByValueComponent__StaticFields_DEFINED
struct Object;
struct MarshalByValueComponent__StaticFields {
    struct Object* EventDisposed;
};
#endif
#if !defined(IL2CPP_STRUCT_MarshalByValueComponent__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MarshalByValueComponent__StaticFields_FWDDECL
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_MarshalByValueComponent__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarshalByValueComponent__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MarshalByValueComponent__StaticFields_FWDDECL)
#include <Modloader/app/structs/MarshalByValueComponent__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MarshalByValueComponent__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
