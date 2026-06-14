#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LongList__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LongList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LongList__Fields_DEFINED)
#define IL2CPP_STRUCT_LongList__Fields_DEFINED
struct Int64__Array;
struct __declspec(align(8)) LongList__Fields {
    struct Int64__Array* m_values;
    int32_t m_count;
    int32_t m_totalItems;
    int32_t m_currentItem;
};
#endif
#if !defined(IL2CPP_STRUCT_LongList__Fields_FWDDECL)
#define IL2CPP_STRUCT_LongList__Fields_FWDDECL
#include <Modloader/app/structs/Int64__Array.h>
#endif
#undef IL2CPP_STRUCT_LongList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LongList__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LongList__Fields_FWDDECL)
#include <Modloader/app/structs/LongList__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LongList__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
