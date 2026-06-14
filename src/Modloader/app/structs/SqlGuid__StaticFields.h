#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlGuid__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlGuid__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlGuid__StaticFields_DEFINED)
#include <Modloader/app/structs/SqlGuid.h>
#if defined(IL2CPP_STRUCT_SqlGuid_DEFINED)
#define IL2CPP_STRUCT_SqlGuid__StaticFields_DEFINED
struct Int32__Array;
struct SqlGuid__StaticFields {
    int32_t s_sizeOfGuid;
    struct Int32__Array* s_rgiGuidOrder;
    struct SqlGuid Null;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlGuid__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SqlGuid__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_SqlGuid__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlGuid__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SqlGuid__StaticFields_FWDDECL)
#include <Modloader/app/structs/SqlGuid__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlGuid__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
