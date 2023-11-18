#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ASCIIEncoding_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ASCIIEncoding_INITIALIZING
#if !defined(IL2CPP_STRUCT_ASCIIEncoding_DEFINED)
#include <Modloader/app/structs/ASCIIEncoding__Fields.h>
#if defined(IL2CPP_STRUCT_ASCIIEncoding__Fields_DEFINED)
#define IL2CPP_STRUCT_ASCIIEncoding_DEFINED
struct ASCIIEncoding__Class;
struct ASCIIEncoding {
    struct ASCIIEncoding__Class* klass;
    MonitorData* monitor;
    struct ASCIIEncoding__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ASCIIEncoding_FWDDECL)
#define IL2CPP_STRUCT_ASCIIEncoding_FWDDECL
#include <Modloader/app/structs/ASCIIEncoding__Class.h>
#endif
#undef IL2CPP_STRUCT_ASCIIEncoding_INITIALIZING
#if !defined(IL2CPP_STRUCT_ASCIIEncoding_DEFINED) && !defined(IL2CPP_STRUCT_ASCIIEncoding_FWDDECL)
#include <Modloader/app/structs/ASCIIEncoding.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ASCIIEncoding.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
