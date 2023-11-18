#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlGuid_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlGuid_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlGuid_DEFINED)
#define IL2CPP_STRUCT_SqlGuid_DEFINED
struct Byte__Array;
struct SqlGuid {
    struct Byte__Array* m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_SqlGuid_FWDDECL)
#define IL2CPP_STRUCT_SqlGuid_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_SqlGuid_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlGuid_DEFINED) && !defined(IL2CPP_STRUCT_SqlGuid_FWDDECL)
#include <Modloader/app/structs/SqlGuid.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlGuid.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
