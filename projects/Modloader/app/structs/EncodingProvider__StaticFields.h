#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EncodingProvider__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EncodingProvider__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncodingProvider__StaticFields_DEFINED)
#define IL2CPP_STRUCT_EncodingProvider__StaticFields_DEFINED
struct Object;
struct EncodingProvider__Array;
struct EncodingProvider__StaticFields {
    struct Object* s_InternalSyncObject;
    struct EncodingProvider__Array* s_providers;
};
#endif
#if !defined(IL2CPP_STRUCT_EncodingProvider__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_EncodingProvider__StaticFields_FWDDECL
#include <Modloader/app/structs/EncodingProvider__Array.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_EncodingProvider__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncodingProvider__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_EncodingProvider__StaticFields_FWDDECL)
#include <Modloader/app/structs/EncodingProvider__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EncodingProvider__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
