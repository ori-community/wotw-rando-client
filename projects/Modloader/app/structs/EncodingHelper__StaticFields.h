#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EncodingHelper__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EncodingHelper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncodingHelper__StaticFields_DEFINED)
#define IL2CPP_STRUCT_EncodingHelper__StaticFields_DEFINED
struct Encoding;
struct Object;
struct Assembly;
struct EncodingHelper__StaticFields {
    struct Encoding* utf8EncodingWithoutMarkers;
    struct Object* lockobj;
    struct Assembly* i18nAssembly;
    bool i18nDisabled;
};
#endif
#if !defined(IL2CPP_STRUCT_EncodingHelper__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_EncodingHelper__StaticFields_FWDDECL
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_EncodingHelper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncodingHelper__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_EncodingHelper__StaticFields_FWDDECL)
#include <Modloader/app/structs/EncodingHelper__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EncodingHelper__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
