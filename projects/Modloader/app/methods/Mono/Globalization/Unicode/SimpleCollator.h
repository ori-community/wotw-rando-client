#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CodePointIndexer.h>
#include <Modloader/app/structs/CompareOptions__Enum.h>
#include <Modloader/app/structs/Contraction.h>
#include <Modloader/app/structs/Contraction__Array.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/SimpleCollator.h>
#include <Modloader/app/structs/SimpleCollator_Context.h>
#include <Modloader/app/structs/SimpleCollator_ExtenderType__Enum.h>
#include <Modloader/app/structs/SortKey.h>
#include <Modloader/app/structs/SortKeyBuffer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/uint8_t.h>

namespace app::classes::Mono::Globalization::Unicode::SimpleCollator {
    IL2CPP_REGISTER_METHOD(0x023BDF30, void, ctor, app::SimpleCollator* this_ptr, app::CultureInfo* culture)
    IL2CPP_REGISTER_METHOD(
        0x023BE3C0,
        void,
        SetCJKTable,
        app::SimpleCollator* this_ptr,
        app::CultureInfo* culture,
        app::CodePointIndexer** cjk_indexer,
        app::uint8_t** cat_table,
        app::uint8_t** lv1_table,
        app::CodePointIndexer** lv2_indexer,
        app::uint8_t** lv2_table
    )
    IL2CPP_REGISTER_METHOD(0x023BE590, app::CultureInfo*, GetNeutralCulture, app::CultureInfo* info)
    IL2CPP_REGISTER_METHOD(0x023BE630, uint8_t, Category, app::SimpleCollator* this_ptr, int32_t cp)
    IL2CPP_REGISTER_METHOD(0x023BE720, uint8_t, Level1, app::SimpleCollator* this_ptr, int32_t cp)
    IL2CPP_REGISTER_METHOD(0x023BE810, uint8_t, Level2, app::SimpleCollator* this_ptr, int32_t cp, app::SimpleCollator_ExtenderType__Enum ext)
    IL2CPP_REGISTER_METHOD(0x023BE9F0, bool, IsHalfKana, int32_t cp, app::CompareOptions__Enum opt)
    IL2CPP_REGISTER_METHOD(0x023BEAC0, app::Contraction*, GetContraction_1, app::SimpleCollator* this_ptr, app::String* s, int32_t start, int32_t end)
    IL2CPP_REGISTER_METHOD(
        0x023BEBF0,
        app::Contraction*,
        GetContraction_2,
        app::SimpleCollator* this_ptr,
        app::String* s,
        int32_t start,
        int32_t end,
        app::Contraction__Array* clist
    )
    IL2CPP_REGISTER_METHOD(0x023BED60, app::Contraction*, GetTailContraction_1, app::SimpleCollator* this_ptr, app::String* s, int32_t start, int32_t end)
    IL2CPP_REGISTER_METHOD(
        0x023BEE90,
        app::Contraction*,
        GetTailContraction_2,
        app::SimpleCollator* this_ptr,
        app::String* s,
        int32_t start,
        int32_t end,
        app::Contraction__Array* clist
    )
    IL2CPP_REGISTER_METHOD(0x023BF110, int32_t, FilterOptions, app::SimpleCollator* this_ptr, int32_t i, app::CompareOptions__Enum opt)
    IL2CPP_REGISTER_METHOD(0x023BF420, app::SimpleCollator_ExtenderType__Enum, GetExtenderType, app::SimpleCollator* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x023BF4D0, uint8_t, ToDashTypeValue, app::SimpleCollator_ExtenderType__Enum ext, app::CompareOptions__Enum opt)
    IL2CPP_REGISTER_METHOD(
        0x023BF4F0,
        int32_t,
        FilterExtender,
        app::SimpleCollator* this_ptr,
        int32_t i,
        app::SimpleCollator_ExtenderType__Enum ext,
        app::CompareOptions__Enum opt
    )
    IL2CPP_REGISTER_METHOD(0x023BF6F0, bool, IsIgnorable, int32_t i, app::CompareOptions__Enum opt)
    IL2CPP_REGISTER_METHOD(0x023BF7D0, bool, IsSafe, app::SimpleCollator* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x023BF850, app::SortKey*, GetSortKey_1, app::SimpleCollator* this_ptr, app::String* s, app::CompareOptions__Enum options)
    IL2CPP_REGISTER_METHOD(
        0x023BF880,
        app::SortKey*,
        GetSortKey_2,
        app::SimpleCollator* this_ptr,
        app::String* s,
        int32_t start,
        int32_t length,
        app::CompareOptions__Enum options
    )
    IL2CPP_REGISTER_METHOD(
        0x023BFA50,
        void,
        GetSortKey_3,
        app::SimpleCollator* this_ptr,
        app::String* s,
        int32_t start,
        int32_t end,
        app::SortKeyBuffer* buf,
        app::CompareOptions__Enum opt
    )
    IL2CPP_REGISTER_METHOD(
        0x023BFE70,
        void,
        FillSortKeyRaw,
        app::SimpleCollator* this_ptr,
        int32_t i,
        app::SimpleCollator_ExtenderType__Enum ext,
        app::SortKeyBuffer* buf,
        app::CompareOptions__Enum opt
    )
    IL2CPP_REGISTER_METHOD(0x023C0360, void, FillSurrogateSortKeyRaw, app::SimpleCollator* this_ptr, int32_t i, app::SortKeyBuffer* buf)
    IL2CPP_REGISTER_METHOD(
        0x023C0410,
        int32_t,
        Compare,
        app::SimpleCollator* this_ptr,
        app::String* s1,
        int32_t idx1,
        int32_t len1,
        app::String* s2,
        int32_t idx2,
        int32_t len2,
        app::CompareOptions__Enum options
    )
    IL2CPP_REGISTER_METHOD(0x023C0510, void, ClearBuffer, app::SimpleCollator* this_ptr, uint8_t* buffer, int32_t size)
    IL2CPP_REGISTER_METHOD(
        0x023C0530,
        int32_t,
        CompareInternal,
        app::SimpleCollator* this_ptr,
        app::String* s1,
        int32_t idx1,
        int32_t len1,
        app::String* s2,
        int32_t idx2,
        int32_t len2,
        bool* target_consumed,
        bool* source_consumed,
        bool skip_heading_extenders,
        bool immediate_breakup,
        app::SimpleCollator_Context* ctx
    )
    IL2CPP_REGISTER_METHOD(0x023C18C0, int32_t, CompareFlagPair, app::SimpleCollator* this_ptr, bool b1, bool b2)
    IL2CPP_REGISTER_METHOD(0x023C18E0, bool, IsPrefix_1, app::SimpleCollator* this_ptr, app::String* src, app::String* target, app::CompareOptions__Enum opt)
    IL2CPP_REGISTER_METHOD(
        0x023C1920,
        bool,
        IsPrefix_2,
        app::SimpleCollator* this_ptr,
        app::String* s,
        app::String* target,
        int32_t start,
        int32_t length,
        app::CompareOptions__Enum opt
    )
    IL2CPP_REGISTER_METHOD(
        0x023C1A20,
        bool,
        IsPrefix_3,
        app::SimpleCollator* this_ptr,
        app::String* s,
        app::String* target,
        int32_t start,
        int32_t length,
        bool skip_heading_extenders,
        app::SimpleCollator_Context* ctx
    )
    IL2CPP_REGISTER_METHOD(0x023C1AA0, bool, IsSuffix_1, app::SimpleCollator* this_ptr, app::String* src, app::String* target, app::CompareOptions__Enum opt)
    IL2CPP_REGISTER_METHOD(
        0x023C1B60,
        bool,
        IsSuffix_2,
        app::SimpleCollator* this_ptr,
        app::String* s,
        app::String* target,
        int32_t start,
        int32_t length,
        app::CompareOptions__Enum opt
    )
    IL2CPP_REGISTER_METHOD(
        0x023C1C30,
        int32_t,
        QuickIndexOf,
        app::SimpleCollator* this_ptr,
        app::String* s,
        app::String* target,
        int32_t start,
        int32_t length,
        bool* test_was_unable
    )
    IL2CPP_REGISTER_METHOD(
        0x023C1DA0,
        int32_t,
        IndexOf_1,
        app::SimpleCollator* this_ptr,
        app::String* s,
        app::String* target,
        int32_t start,
        int32_t length,
        app::CompareOptions__Enum opt
    )
    IL2CPP_REGISTER_METHOD(
        0x023C20D0,
        int32_t,
        IndexOfOrdinal_1,
        app::SimpleCollator* this_ptr,
        app::String* s,
        app::String* target,
        int32_t start,
        int32_t length
    )
    IL2CPP_REGISTER_METHOD(0x023C21B0, int32_t, IndexOfOrdinal_2, app::SimpleCollator* this_ptr, app::String* s, char16_t target, int32_t start, int32_t length)
    IL2CPP_REGISTER_METHOD(
        0x023C2230,
        int32_t,
        IndexOfSortKey,
        app::SimpleCollator* this_ptr,
        app::String* s,
        int32_t start,
        int32_t length,
        uint8_t* sortkey,
        char16_t target,
        int32_t ti,
        bool no_lv4,
        app::SimpleCollator_Context* ctx
    )
    IL2CPP_REGISTER_METHOD(
        0x023C22F0,
        int32_t,
        IndexOf_2,
        app::SimpleCollator* this_ptr,
        app::String* s,
        app::String* target,
        int32_t start,
        int32_t length,
        uint8_t* target_sort_key,
        app::SimpleCollator_Context* ctx
    )
    IL2CPP_REGISTER_METHOD(
        0x023C2850,
        int32_t,
        LastIndexOf_1,
        app::SimpleCollator* this_ptr,
        app::String* s,
        app::String* target,
        int32_t start,
        int32_t length,
        app::CompareOptions__Enum opt
    )
    IL2CPP_REGISTER_METHOD(
        0x023C2A40,
        int32_t,
        LastIndexOfOrdinal,
        app::SimpleCollator* this_ptr,
        app::String* s,
        app::String* target,
        int32_t start,
        int32_t length
    )
    IL2CPP_REGISTER_METHOD(
        0x023C2B90,
        int32_t,
        LastIndexOfSortKey,
        app::SimpleCollator* this_ptr,
        app::String* s,
        int32_t start,
        int32_t org_start,
        int32_t length,
        uint8_t* sortkey,
        int32_t ti,
        bool no_lv4,
        app::SimpleCollator_Context* ctx
    )
    IL2CPP_REGISTER_METHOD(
        0x023C2C60,
        int32_t,
        LastIndexOf_2,
        app::SimpleCollator* this_ptr,
        app::String* s,
        app::String* target,
        int32_t start,
        int32_t length,
        uint8_t* target_sort_key,
        app::SimpleCollator_Context* ctx
    )
    IL2CPP_REGISTER_METHOD(
        0x023C31A0,
        bool,
        MatchesForward,
        app::SimpleCollator* this_ptr,
        app::String* s,
        int32_t* idx,
        int32_t end,
        int32_t ti,
        uint8_t* sortkey,
        bool no_lv4,
        app::SimpleCollator_Context* ctx
    )
    IL2CPP_REGISTER_METHOD(
        0x023C3370,
        bool,
        MatchesForwardCore,
        app::SimpleCollator* this_ptr,
        app::String* s,
        int32_t* idx,
        int32_t end,
        int32_t ti,
        uint8_t* sortkey,
        bool no_lv4,
        app::SimpleCollator_ExtenderType__Enum ext,
        app::Contraction** ct,
        app::SimpleCollator_Context* ctx
    )
    IL2CPP_REGISTER_METHOD(
        0x023C37A0,
        bool,
        MatchesPrimitive,
        app::SimpleCollator* this_ptr,
        app::CompareOptions__Enum opt,
        uint8_t* source,
        int32_t si,
        app::SimpleCollator_ExtenderType__Enum ext,
        uint8_t* target,
        int32_t ti,
        bool no_lv4
    )
    IL2CPP_REGISTER_METHOD(
        0x023C39F0,
        bool,
        MatchesBackward,
        app::SimpleCollator* this_ptr,
        app::String* s,
        int32_t* idx,
        int32_t end,
        int32_t org_start,
        int32_t ti,
        uint8_t* sortkey,
        bool no_lv4,
        app::SimpleCollator_Context* ctx
    )
    IL2CPP_REGISTER_METHOD(
        0x023C3BD0,
        bool,
        MatchesBackwardCore,
        app::SimpleCollator* this_ptr,
        app::String* s,
        int32_t* idx,
        int32_t end,
        int32_t org_start,
        int32_t ti,
        uint8_t* sortkey,
        bool no_lv4,
        app::SimpleCollator_ExtenderType__Enum ext,
        app::Contraction** ct,
        app::SimpleCollator_Context* ctx
    )
    IL2CPP_REGISTER_METHOD(0x023C4230, void, cctor, )
} // namespace app::classes::Mono::Globalization::Unicode::SimpleCollator
