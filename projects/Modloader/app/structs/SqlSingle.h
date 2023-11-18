#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlSingle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlSingle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlSingle_DEFINED)
#define IL2CPP_STRUCT_SqlSingle_DEFINED
struct SqlSingle {
    bool _fNotNull;
    float _value;
};
#endif
#if !defined(IL2CPP_STRUCT_SqlSingle_FWDDECL)
#define IL2CPP_STRUCT_SqlSingle_FWDDECL
#endif
#undef IL2CPP_STRUCT_SqlSingle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlSingle_DEFINED) && !defined(IL2CPP_STRUCT_SqlSingle_FWDDECL)
#include <Modloader/app/structs/SqlSingle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlSingle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
