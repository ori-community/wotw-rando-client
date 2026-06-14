#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsMetaType__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsMetaType__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsMetaType__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_fsMetaType__Fields_DEFINED
struct Type;
struct fsMetaProperty__Array;
struct __declspec(align(8)) fsMetaType__Fields {
    struct Type* ReflectedType;
    struct fsMetaProperty__Array* _Properties_k__BackingField;
    struct Nullable_1_Boolean_ _hasDefaultConstructorCache;
    struct Nullable_1_Boolean_ _isDefaultConstructorPublicCache;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsMetaType__Fields_FWDDECL)
#define IL2CPP_STRUCT_fsMetaType__Fields_FWDDECL
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/fsMetaProperty__Array.h>
#endif
#undef IL2CPP_STRUCT_fsMetaType__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsMetaType__Fields_DEFINED) && !defined(IL2CPP_STRUCT_fsMetaType__Fields_FWDDECL)
#include <Modloader/app/structs/fsMetaType__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsMetaType__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
